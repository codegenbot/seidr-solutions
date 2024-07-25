int hex_key(string num) {
    int count = 0;
    for (char c : num) {
        if (c >= 'A' && c <= 'F') {
            switch (c - 'A') {
                case 0: c = 'B'; break; // A -> B
                case 1: c = 'D'; break; // C -> D
                case 2: c = 'F'; break; // E -> F
            }
        }
        if ((c >= '2' && c <= '7') || (c == 'B' || c == 'D' || c == 'F')) {
            count++;
        }
    }
    return count;
}