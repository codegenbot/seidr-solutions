Here is the completed code:

def dice_game(n, m):
    return sum(1.0/(m**k)*(n-m)**(n-k) for k in range(m+1))