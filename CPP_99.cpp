double num = stod(value);
int result = static_cast<int>(round(num));
return (num - result) > 0 ? ceil(num) : floor(num);