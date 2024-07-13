def dice_game(n, m):
    return (sum(range(1,n+1)) - sum(range(1,m+1))) / (n*m)

n = int(input("Enter the number of sides in Peter's die: "))
m = int(input("Enter the number of sides in Colin's die: "))

print(f"The probability that Peter rolls strictly higher than Colin is {dice_game(n, m)}")