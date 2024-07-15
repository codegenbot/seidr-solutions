else if (c == '/') {
    frames[frame] = 10 - frames[frame - 1];
    if (frame > 1 && bowls[2 * frame - 3] == '/') {
        frames[frame - 1] = 20 - frames[frame - 2];
    }
    frame++;
    ball = 0;
}