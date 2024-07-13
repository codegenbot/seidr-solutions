int score(string s) {
    int total = 0;
    int frame = 1;
    int roll = 0;
    vector<int> points;

    for (char c : s) {
        if (c == 'X') {
            points.push_back(10);
            if (frame < 10) {
                points.push_back(0);
            }
            frame++;
        } else if (c == '/') {
            points.push_back(10 - points.back());
        } else if (c == '-') {
            points.push_back(0);
        } else {
            points.push_back(c - '0');
        }

        if (frame > 10) {
            break;
        }

        if (roll % 2 == 1 || c == 'X' || c == '/') {
            int i = points.size() - 1;
            while (roll < 2 && i >= 0) {
                total += points[i];
                i--;
                roll++;
            }
            roll = 0;
        }
    }

    return total;
}