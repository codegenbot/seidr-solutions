double val = stod(value);
int rounded = static_cast<int>(val >= 0 ? val + 0.5 : val - 0.5);
return rounded;
}