for (int i = 0; i < 10; ++i) {
    if (bowls[bowlIndex] == 'X') {
        total += 10 + (bowls[bowlIndex + 1] == 'X' ? 10 : bowls[bowlIndex + 1] - '0') + (bowls[bowlIndex + 2] == 'X' ? 10 : bowls[bowlIndex + 2] - '0');
        bowlIndex++;
    } else if (bowls[bowlIndex + 1] == '/') {
        total += 10 + (bowls[bowlIndex + 2] == 'X' ? 10 : bowls[bowlIndex + 2] - '0');
        bowlIndex += 2;
    } else {
        total += bowls[bowlIndex] - '0' + bowls[bowlIndex + 1] - '0';
        bowlIndex += 2;
    }
}