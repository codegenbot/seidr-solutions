def make_a_pile(n):
    pile = []
    odd_even = "o" if n % 2 else "e"
    for i in range(1, n + 1):
        if odd_even == "o":
            pile.append(2 * i - 1)
            odd_even = "e"
        else:
            pile.append(2 * i)
            odd_even = "o"
    return pile