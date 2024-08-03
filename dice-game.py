def solution(n, m):
    return (n - 1) / (n * m - min(n, m)) if n > m else (m - 1) / (n * m - min(n, m))