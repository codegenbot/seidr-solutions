// Change boost::any_cast to std::any_cast
// Change string to std::string
assert(std::any_cast<std::string>(compare_one(std::string("1"), std::string("2"))) == "2");