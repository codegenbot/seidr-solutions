else if (c == 'X') {
    total += 10 + frameScore;
    if (isStrike) total += 10;
    if (isSpare) total += 10 - (s[(frame - 1) * 2] - '0') + 10;
    isStrike = true;
    frameScore = 0;
    frame++;
}