double num = stod(value);
int closest = static_cast<int>(round(num));
int next = static_cast<int>(num < 0 ? ceil(num) : floor(num));
return abs(num - closest) < abs(num - next) ? closest : next;