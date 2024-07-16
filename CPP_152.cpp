vector<int> diffs;
    for (size_t i = 0; i < game.size(); ++i) {
        diffs.push_back(abs(game[i] - guess[i]));
    }
    return diffs;
}