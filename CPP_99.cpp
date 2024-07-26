double val = stod(value);
int lower = floor(val);
int higher = ceil(val);
return abs(lower - val) < abs(higher - val) ? lower : higher;