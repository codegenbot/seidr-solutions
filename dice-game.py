def dice_game():
    n = int(input("Enter the number of sides for Peter's die: "))
    m = int(input("Enter the number of sides for Colin's die: "))
    return (n - 1) * (m - 1) / (n * m)