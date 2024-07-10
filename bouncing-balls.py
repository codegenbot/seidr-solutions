```
def bouncing_balls():
    h0 = float(input())
    hf = float(input())
    bi = hf / h0
    nb = int(input())
    
    total_distance = 2 * (1 + bi ** (nb + 1)) - 2
    
    return str(total_distance)

print(bouncing_balls())