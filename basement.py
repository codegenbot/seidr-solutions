def basement(vector):
    for i, num in enumerate((0,) + vector):
        if (cumsum := sum(vector[:i+1])) < 0:
            return i