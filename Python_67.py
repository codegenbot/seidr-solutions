def fruit_distribution(s="Enter the string: ", n=0):
    s = input(s)
    n = int(input("Enter the number of fruits to consider: "))
    s = s.lower()
    fruits = s.split("and")
    for i in range(len(fruits)):
        if "," in fruits[i]:
            fruits[i] = fruits[i].replace(",", "")
    return (
        sum(
            int(fruit.split()[0]) if fruit.split()[0].isdigit() else 1
            for fruit in fruits[:n]
        )
        / n
    )