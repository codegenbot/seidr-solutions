--- old
+++ new
@@ -19,7 +20,6 @@ def max_fill(grid, capacity):
             if total_capacity > length:
                 count += (total_capacity - length) // capacity
-            return count
+    total_capacity = sum(num_buckets for num_buckets in num_buckets_per_row.values())
+    return total_capacity // capacity