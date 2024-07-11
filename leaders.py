def leaders(input):
    return [i for i in input if all(j <= i for j in input[input.index(i)+1:])]
input = list(map(int, input().split()))
print(' '.join(map(str, leaders(input))))