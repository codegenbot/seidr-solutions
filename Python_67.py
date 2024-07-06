def fruit_distribution(s, n):
   apples, oranges = map(int, s.split())
   if not s.isdigit():
      raise ValueError("Invalid input")
   return n - apples - oranges