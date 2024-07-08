input = list(map(int, input().split()))
leaders = [i for i in reversed(input) if all(j < i for j in input[input.index(i)+1:])]
print(leaders)