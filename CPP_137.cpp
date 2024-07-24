template <typename T>
T compare_one(boost::any a, boost::any b) {
    assert(a.type() == b.type());

    if (a.type() == typeid(int)) {
        return std::max(boost::any_cast<int>(a), boost::any_cast<int>(b));
    } else if (a.type() == typeid(float)) {
        return std::max(boost::any_cast<float>(a), boost::any_cast<float>(b));
    } else if (a.type() == typeid(std::string)) {
        return std::max(boost::any_cast<std::string>(a), boost::any_cast<std::string>(b));
    } else {
        assert(false && "Unsupported type comparison");
    }
}