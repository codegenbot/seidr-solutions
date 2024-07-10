else if (c == '/') {
    frames[frame] = 10 - frames[frame - 1] + c - '0';
    frame++;
    ball = 0;
}