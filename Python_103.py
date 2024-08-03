def rounded_avg():
    n = int(input("Enter number of rounds: "))
    m = int(input("Enter maximum score in each round: "))
    if n > m:
        print(-1)
    else:
        avg = (n + m) // 2
        print(bin(avg)[2:])