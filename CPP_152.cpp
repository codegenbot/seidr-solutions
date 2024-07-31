vector<int> off;
    for(size_t i = 0; i < game.size(); ++i) {
        off.push_back(abs(game[i] - guess[i]));
    }
    return off;
}