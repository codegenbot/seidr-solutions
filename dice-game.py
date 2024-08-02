def solution(n, m):
    return (n - 1) / m if n > m else 1 - (m - 1) / n if n < m else 0