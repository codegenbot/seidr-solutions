int answer = -1;
    for (int num : lst) {
        if (num > 0 && count(lst.begin(), lst.end(), num) >= num) {
            answer = max(answer, num);
        }
    }
    return answer;
}