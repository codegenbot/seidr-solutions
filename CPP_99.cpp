double val = stod(value);
 return (val >= 0) ? floor(val + 0.5) : ceil(val - 0.5);
}