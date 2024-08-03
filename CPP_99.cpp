int closest_integer(std::string value) {
    double num = stod(value);
    int rounded_num = static_cast<int>(round(num));
  
    return static_cast<int>(num + (num > 0 ? 0.5 : -0.5));
}