double num = stod(value);
return (num >= 0) ? round(num + 1e-6) : round(num - 1e-6);