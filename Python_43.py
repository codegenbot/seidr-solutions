

def pairs_sum_to_zero(l):
    for i in range(len(l)):
        for j in range(len(l)):
            if i != j:
                if l[j] + l[i] == 0:
                    return True
    return False

