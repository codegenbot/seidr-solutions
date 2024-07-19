double number = stod(value);
    if (number >= 0) {
        return (int)(number + 0.5);
    } else {
        return (int)(number - 0.5);
    }
}