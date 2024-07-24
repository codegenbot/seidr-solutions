```
total_apple = s.count("apple")
total_orange = s.count("orange")
total_fruit = (total_apple + total_orange) / 2
if total_fruit < 1:
    return max(total_apple, total_orange)
else:
    return n - total_fruit