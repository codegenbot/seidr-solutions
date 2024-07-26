double val = stod(value);
int closestInt = round(val);
if (val - closestInt == 0.5)
    closestInt = ceil(val);
else if (val - closestInt == -0.5)
    closestInt = floor(val);
return closestInt;
}