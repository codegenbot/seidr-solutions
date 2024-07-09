string output = "";
    bool consecutive = false;
    for (char c : text) {
        if (c == ' ') {
            if (consecutive) {
                output.pop_back();
                output += "-";
            } else {
                output += "_";
            }
            consecutive = true;
        } else {
            output += c;
            consecutive = false;
        }
    }
    return output;
}