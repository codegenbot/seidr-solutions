double num = stod(value);
    int closestInt = static_cast<int>(round(num));
    if (num - closestInt == 0.5) {
        closestInt = static_cast<int>(ceil(num));
    } else if (num - closestInt == -0.5) {
        closestInt = static_cast<int>(floor(num));
    }
    return closestInt;
}