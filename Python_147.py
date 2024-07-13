print("Enter the number up to which you want to find max triples: ", end="")
n = int(input())

def get_max_triples(n):
    if n < 1:
        return None
    avg_value = (n + 2) // 3  
    return avg_value * 3

print(get_max_triples(n))