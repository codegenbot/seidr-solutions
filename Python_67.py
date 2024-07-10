def fruit_distribution():
    s = input("Enter the sentence (e.g., 'apples apples oranges' ): ")
    n = int(input("Enter the number of fruits: "))
    s = (
        " ".join(s.split())
        .replace("apples and", "apples ")
        .replace("oranges", " oranges")
        .split()
    )
    apples = int(
        sum(1 for word in s if word == "apples")
        - (sum(1 for word in s if word == "apples and") or 0)
    )
    oranges = sum(1 for word in s if word == "oranges")
    return n - apples - oranges