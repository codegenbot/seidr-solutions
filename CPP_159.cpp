int total = number + remaining;
    if (total >= need) {
        return {total, total - need};
    } else {
        return {total, 0};
    }
}