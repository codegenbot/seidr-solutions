for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result.push_back(1);
        } else {
            result.push_back(0);
        }
    }