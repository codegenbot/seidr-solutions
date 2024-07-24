variant<string, int, float> compare_one(variant<any> a, variant<any> b) {
    if (holds_alternative<int>(a) && holds_alternation<float>(b)) {
        return to_string(max(get<int>(a), get<float>(b)));
    } else if (holds_alternation<float>(a) && holds_alternation<string>(b)) {
        string s = get<string>(b);
        return to_string(max(get<float>(a), stof(s.erase(0, 1).erase(s.length() - 1))));
    } 
    // Add more cases as needed
    else if (holds_alternation<string>(a) && holds_alternation<string>(b)) {
        return max(a, b).template get<string>();
    } 
    else if (holds_alternation<int>(a) && holds_alternation<int>(b)) {
        int aInt = get<int>(a);
        int bInt = get<int>(b);
        return to_string((aInt > bInt) ? aInt : bInt);
    }
    // Handle all other cases or unexpected inputs
    return "None";
}