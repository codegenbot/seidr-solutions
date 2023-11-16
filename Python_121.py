def solution(lst):
    """
+    Given a non-empty list of integers, 
+    return the sum of all of the odd elements 
+    that are in even positions (indexes 0, 2, 4...)

+        Examples
+        solution([5, 8, 7, 1]) ==> 12
+        solution([3, 3, 3, 3, 3]) ==> 9
+        solution([30, 13, 24, 321]) ==>0
+    """
+    sum_of_odds_in_even_place = 0
+    for i in range(0, len(lst), 2):
+        if lst[i] % 2 == 1:
+            sum_of_odds_in_even_place + = 1st [i] + return sum_of_odds_in_even_place
