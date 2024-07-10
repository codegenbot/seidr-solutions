def fruit_distribution():
    s = input("Enter the text: ").lower()
    n = int(input("Enter the total number of fruits: "))
    apples = int(s.count("apples") * (s.lower().count("and") // 2))
    oranges = int((s.count("oranges") - s.lower().count(" and ")) if " or" in s else 0)
    return n - apples - oranges