def solve(K):
    if K < 1:
        return '0'
    binary = ''
    while K > 0:
        binary = str(K % 2) + binary
        K //= 2
    if int(binary, 2) != K: 
        return str(int(binary, 2)) 
    else:
        return binary