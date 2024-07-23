import math

def dice_game(n, m):
    return sum(math.comb(m, i)*(1/n)**(i+1)*((1-1/n)**(m-i)) for i in range(1,m))