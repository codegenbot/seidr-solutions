int main() {
    std::cout << bowlingScore("X|---5-8-|X||25--|-1-3-4-6-8-9-7");
}

int bowlingScore(const std::string& frames) {
    int total = 0;
    int currentRoll = 0;
    for (size_t i = 0; i < frames.size(); ++i) {
        if (frames[i] == 'X') {
            total += 10 + strikeBonus(frames.substr(i+1));
            currentRoll = 2;
        } else if (frames[i] == '/') {
            total += sumOf(currentRoll, getRestFrames(frames, i));
            currentRoll = 0;
        } else if (isdigit(frames[i])) {
            int roll = 0;
            for (++i; i < frames.size() && isdigit(frames[i]); ++i) {
                roll = roll * 10 + frames[i] - '0';
            }
            total += currentRoll + roll;
            currentRoll = 0;
        } else {
            currentRoll++;
        }
    }
    return total;
}

int strikeBonus(const std::string& restFrames) {
    int bonus = 0;
    for (size_t i = 0; i < restFrames.size(); ++i) {
        if (restFrames[i] == 'X') {
            bonus += 10 + strikeBonus(restFrames.substr(i+1));
            break;
        } else if (restFrames[i] == '/') {
            bonus += sumOf(10, getRestFrames(restFrames, i));
            break;
        } else {
            int roll = restFrames[i] - '0';
            for (++i; i < restFrames.size() && isdigit(restFrames[i]); ++i) {
                roll = roll * 10 + restFrames[i] - '0';
            }
            bonus += roll;
            break;
        }
    }
    return bonus;
}

int sumOf(int a, const std::string& b) {
    int sum = a;
    for (size_t i = 0; i < b.size(); ++i) {
        if (isdigit(b[i])) {
            sum += b[i] - '0';
        } else {
            break;
        }
    }
    return sum;
}

std::string getRestFrames(const std::string& frames, size_t start) {
    for (++start; start < frames.size(); ++start) {
        if (frames[start] == '|') {
            return frames.substr(start+1);
        }
    }
    return "";
}