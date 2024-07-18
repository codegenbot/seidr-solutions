vector<int> filter_integers(list_any values);
bool issame(vector<int> a, vector<int> b);

class list_any : public std::list<boost::any> {};

template<typename ValueType>
ValueType any_cast(const boost::any& operand) {
    return boost::any_cast<ValueType>(operand);
}