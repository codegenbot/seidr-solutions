int start = max({interval1[0], interval2[0]});
int end = min({interval1[1], interval2[1]});

if (start > end) {
    string result = to_string(start) + " " + to_string(end);
    return result;
}