def dice_game(n, m):
    total = n * m
    higher_than_colin = sum(1 for i in range(1, n+1) for j in range(1, min(i, m)+1)) 
    return (higher_than_colin - ((min(n, m)-1)*(n-m)+(m-1))/total)