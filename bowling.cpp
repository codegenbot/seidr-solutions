if (scores[20] == 10 || scores[20] + scores[21] == 10) {
    total += scores[20] + scores[21] + scores[22];
} else {
    total += scores[20] + scores[21];
}

for (int i = 0; i < 10; i++) {
    if (scores[i * 2] == 10) {
        total += 10 + scores[i * 2 + 1] + scores[i * 2 + 2];
        if (scores[i * 2 + 1] == 10 && scores[i * 2 + 2] != 0 && i < 9) {
            total += scores[i * 2 + 3];
        }
    } else if (scores[i * 2] + scores[i * 2 + 1] == 10) {
        total += 10 + scores[i * 2 + 2];
    } else {
        total += scores[i * 2] + scores[i * 2 + 1];
    }
}