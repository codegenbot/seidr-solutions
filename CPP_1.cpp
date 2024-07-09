// add the last group
if (open_count > 0) {
    while (open_count > 0) {
        current_group += ')';
        open_count--;
    }
    result.push_back(current_group);
} else {
    result.push_back(last_group);
}