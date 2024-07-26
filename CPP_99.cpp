float num = stof(value);
int closestInt = round(num);
if (num - closestInt == 0.5) {
    closestInt = num > 0 ? ceil(num) : floor(num);
}
return closestInt;
}